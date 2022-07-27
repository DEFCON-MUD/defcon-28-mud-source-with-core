inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 34, 1 }));
  set_short( "Hallway - x47y34z1" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y35z1.c",
  "south" : DIR+"/rooms/x47y33z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
