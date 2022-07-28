inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 15, 7 }));
  set_short( "Corridor - x59y15z7" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y16z7.c",
  "south" : DIR+"/rooms/x59y14z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
