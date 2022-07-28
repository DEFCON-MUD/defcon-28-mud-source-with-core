inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 59, 1 }));
  set_short( "Hallway - x15y59z1" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y60z1.c",
  "south" : DIR+"/rooms/x15y58z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
