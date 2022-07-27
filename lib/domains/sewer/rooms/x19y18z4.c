inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 18, 4 }));
  set_short( "Hallway - x19y18z4" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y18z4.c",
  "east" : DIR+"/rooms/x20y18z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
