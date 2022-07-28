inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 36, 2 }));
  set_short( "Corridor - x3y36z2" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y37z2.c",
  "south" : DIR+"/rooms/x3y35z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
