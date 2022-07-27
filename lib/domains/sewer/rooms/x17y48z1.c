inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 48, 1 }));
  set_short( "Corridor - x17y48z1" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y48z1.c",
  "south" : DIR+"/rooms/x17y47z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
