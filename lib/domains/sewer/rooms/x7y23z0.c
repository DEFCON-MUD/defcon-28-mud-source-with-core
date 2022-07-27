inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 23, 0 }));
  set_short( "Passage - x7y23z0" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y24z0.c",
  "south" : DIR+"/rooms/x7y22z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
