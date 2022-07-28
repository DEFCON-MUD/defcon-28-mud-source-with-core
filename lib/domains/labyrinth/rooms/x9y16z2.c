inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 16, 2 }));
  set_short( "Hallway - x9y16z2" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y16z2.c",
  "south" : DIR+"/rooms/x9y15z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
