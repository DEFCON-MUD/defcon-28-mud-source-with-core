inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 12, 6 }));
  set_short( "Hallway - x21y12z6" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y12z6.c",
  "north" : DIR+"/rooms/x21y13z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
