inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 44, 9 }));
  set_short( "Passage - x40y44z9" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y44z9.c",
  "east" : DIR+"/rooms/x41y44z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
