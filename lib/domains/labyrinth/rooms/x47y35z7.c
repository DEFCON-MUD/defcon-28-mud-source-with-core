inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 35, 7 }));
  set_short( "Passage - x47y35z7" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y36z7.c",
  "south" : DIR+"/rooms/x47y34z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
