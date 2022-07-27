inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 24, 1 }));
  set_short( "Hallway - x7y24z1" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y24z1.c",
  "east" : DIR+"/rooms/x8y24z1.c",
  "north" : DIR+"/rooms/x7y25z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
