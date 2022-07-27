inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 16, 0 }));
  set_short( "Passage - x31y16z0" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y16z0.c",
  "south" : DIR+"/rooms/x31y15z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
