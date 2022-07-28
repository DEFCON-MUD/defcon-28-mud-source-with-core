inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 60, 2 }));
  set_short( "Passage - x59y60z2" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "south" : DIR+"/rooms/x59y59z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
