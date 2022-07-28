inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 37, 4 }));
  set_short( "Passage - x17y37z4" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y38z4.c",
  "south" : DIR+"/rooms/x17y36z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
