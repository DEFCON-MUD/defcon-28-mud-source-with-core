inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 32, 5 }));
  set_short( "Passage - x17y32z5" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y33z5.c",
  "south" : DIR+"/rooms/x17y31z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
