inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 58, 8 }));
  set_short( "Hallway - x57y58z8" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y58z8.c",
  "north" : DIR+"/rooms/x57y59z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
