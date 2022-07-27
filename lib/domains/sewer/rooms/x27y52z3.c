inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 52, 3 }));
  set_short( "Passage - x27y52z3" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y52z3.c",
  "south" : DIR+"/rooms/x27y51z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
