inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 44, 1 }));
  set_short( "Passage - x31y44z1" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y44z1.c",
  "east" : DIR+"/rooms/x32y44z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
