inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 61, 7 }));
  set_short( "Hallway - x7y61z7" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y62z7.c",
  "south" : DIR+"/rooms/x7y60z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
