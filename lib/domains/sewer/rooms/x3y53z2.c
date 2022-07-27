inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 53, 2 }));
  set_short( "Hallway - x3y53z2" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y54z2.c",
  "south" : DIR+"/rooms/x3y52z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
