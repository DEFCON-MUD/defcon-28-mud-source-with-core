inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 34, 4 }));
  set_short( "Hallway - x30y34z4" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y34z4.c",
  "east" : DIR+"/rooms/x31y34z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
