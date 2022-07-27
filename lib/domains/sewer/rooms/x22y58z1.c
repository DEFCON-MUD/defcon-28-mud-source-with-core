inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 58, 1 }));
  set_short( "Passage - x22y58z1" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y58z1.c",
  "east" : DIR+"/rooms/x23y58z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
