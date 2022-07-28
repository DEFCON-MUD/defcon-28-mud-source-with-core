inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 48, 0 }));
  set_short( "Hallway - x47y48z0" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y48z0.c",
  "north" : DIR+"/rooms/x47y49z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
