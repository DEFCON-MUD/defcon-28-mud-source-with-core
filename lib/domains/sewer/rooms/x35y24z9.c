inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 24, 9 }));
  set_short( "Hallway - x35y24z9" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y24z9.c",
  "north" : DIR+"/rooms/x35y25z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
