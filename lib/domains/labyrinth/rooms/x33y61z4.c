inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 61, 4 }));
  set_short( "Corridor - x33y61z4" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y62z4.c",
  "south" : DIR+"/rooms/x33y60z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
