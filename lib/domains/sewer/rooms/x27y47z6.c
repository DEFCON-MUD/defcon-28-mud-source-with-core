inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 47, 6 }));
  set_short( "Hallway - x27y47z6" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y48z6.c",
  "south" : DIR+"/rooms/x27y46z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
