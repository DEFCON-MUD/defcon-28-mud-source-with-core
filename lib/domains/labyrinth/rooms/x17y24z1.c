inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 24, 1 }));
  set_short( "Hallway - x17y24z1" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y24z1.c",
  "east" : DIR+"/rooms/x18y24z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
