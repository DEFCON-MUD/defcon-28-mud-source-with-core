inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 24, 6 }));
  set_short( "Corridor - x13y24z6" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y24z6.c",
  "north" : DIR+"/rooms/x13y25z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
