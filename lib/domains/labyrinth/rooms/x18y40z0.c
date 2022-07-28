inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 40, 0 }));
  set_short( "Passage - x18y40z0" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y40z0.c",
  "east" : DIR+"/rooms/x19y40z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
