inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 18, 2 }));
  set_short( "Hallway - x23y18z2" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y18z2.c",
  "south" : DIR+"/rooms/x23y17z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
