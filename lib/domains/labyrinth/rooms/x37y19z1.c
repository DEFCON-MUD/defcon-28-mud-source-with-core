inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 19, 1 }));
  set_short( "Passage - x37y19z1" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y20z1.c",
  "south" : DIR+"/rooms/x37y18z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
