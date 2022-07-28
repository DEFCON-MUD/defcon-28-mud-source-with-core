inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 8, 9 }));
  set_short( "Passage - x20y8z9" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y8z9.c",
  "east" : DIR+"/rooms/x21y8z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
