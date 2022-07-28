inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 4, 7 }));
  set_short( "Corridor - x55y4z7" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y4z7.c",
  "north" : DIR+"/rooms/x55y5z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
