inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 44, 2 }));
  set_short( "Passage - x25y44z2" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y44z2.c",
  "south" : DIR+"/rooms/x25y43z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
