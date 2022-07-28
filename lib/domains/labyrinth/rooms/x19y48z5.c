inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 48, 5 }));
  set_short( "Corridor - x19y48z5" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y48z5.c",
  "north" : DIR+"/rooms/x19y49z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
