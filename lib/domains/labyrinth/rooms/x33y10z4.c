inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 10, 4 }));
  set_short( "Corridor - x33y10z4" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y10z4.c",
  "south" : DIR+"/rooms/x33y9z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
