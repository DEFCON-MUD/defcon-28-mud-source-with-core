inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 11, 9 }));
  set_short( "Corridor - x3y11z9" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y12z9.c",
  "south" : DIR+"/rooms/x3y10z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
