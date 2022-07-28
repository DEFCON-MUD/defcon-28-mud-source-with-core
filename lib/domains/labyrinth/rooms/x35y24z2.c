inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 24, 2 }));
  set_short( "Hallway - x35y24z2" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y24z2.c",
  "east" : DIR+"/rooms/x36y24z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
