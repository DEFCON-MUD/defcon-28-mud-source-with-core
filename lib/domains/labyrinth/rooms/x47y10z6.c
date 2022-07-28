inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 10, 6 }));
  set_short( "Hallway - x47y10z6" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y10z6.c",
  "south" : DIR+"/rooms/x47y9z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
