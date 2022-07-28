inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 62, 2 }));
  set_short( "Corridor - x44y62z2" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y62z2.c",
  "east" : DIR+"/rooms/x45y62z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
