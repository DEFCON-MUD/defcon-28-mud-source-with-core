inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 48, 6 }));
  set_short( "Passage - x11y48z6" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y48z6.c",
  "north" : DIR+"/rooms/x11y49z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
