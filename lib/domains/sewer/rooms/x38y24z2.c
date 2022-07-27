inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 24, 2 }));
  set_short( "Hallway - x38y24z2" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y24z2.c",
  "east" : DIR+"/rooms/x39y24z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
