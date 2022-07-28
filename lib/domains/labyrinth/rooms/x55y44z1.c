inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 44, 1 }));
  set_short( "Passage - x55y44z1" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y44z1.c",
  "south" : DIR+"/rooms/x55y43z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
