inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 60, 4 }));
  set_short( "Passage - x23y60z4" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y61z4.c",
  "south" : DIR+"/rooms/x23y59z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
