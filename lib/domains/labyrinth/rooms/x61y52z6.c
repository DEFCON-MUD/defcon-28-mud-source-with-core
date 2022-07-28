inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 6 }));
  set_short( "Corridor - x61y52z6" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y52z6.c",
  "north" : DIR+"/rooms/x61y53z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
