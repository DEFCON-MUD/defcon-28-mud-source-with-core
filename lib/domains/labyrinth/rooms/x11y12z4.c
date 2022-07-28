inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 12, 4 }));
  set_short( "Corridor - x11y12z4" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y13z4.c",
  "south" : DIR+"/rooms/x11y11z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
