inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 60, 9 }));
  set_short( "Hallway - x27y60z9" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y60z9.c",
  "east" : DIR+"/rooms/x28y60z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
