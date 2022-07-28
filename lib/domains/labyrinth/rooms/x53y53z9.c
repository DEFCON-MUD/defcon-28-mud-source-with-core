inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 53, 9 }));
  set_short( "Passage - x53y53z9" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y54z9.c",
  "south" : DIR+"/rooms/x53y52z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
