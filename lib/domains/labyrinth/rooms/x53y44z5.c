inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 44, 5 }));
  set_short( "Hallway - x53y44z5" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y45z5.c",
  "south" : DIR+"/rooms/x53y43z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
