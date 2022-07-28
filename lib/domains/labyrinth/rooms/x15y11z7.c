inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 11, 7 }));
  set_short( "Corridor - x15y11z7" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y12z7.c",
  "south" : DIR+"/rooms/x15y10z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
