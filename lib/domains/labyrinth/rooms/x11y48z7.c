inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 48, 7 }));
  set_short( "Corridor - x11y48z7" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y48z7.c",
  "east" : DIR+"/rooms/x12y48z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
