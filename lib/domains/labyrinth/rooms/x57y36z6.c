inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 36, 6 }));
  set_short( "Passage - x57y36z6" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y37z6.c",
  "south" : DIR+"/rooms/x57y35z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
