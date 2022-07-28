inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 25, 4 }));
  set_short( "Corridor - x1y25z4" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y26z4.c",
  "south" : DIR+"/rooms/x1y24z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
