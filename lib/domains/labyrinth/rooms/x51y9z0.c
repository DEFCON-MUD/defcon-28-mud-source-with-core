inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 9, 0 }));
  set_short( "Passage - x51y9z0" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y10z0.c",
  "south" : DIR+"/rooms/x51y8z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
